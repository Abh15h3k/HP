from threading import Thread, currentThread, Lock
from random import randint
import queue


class multiPriorityQueue:
    def __init__(self):
        self.queue = queue.Queue()
        self.lock = Lock()

    def get(self):
        if (not self.empty()):
            self.lock.acquire()
            i= self.queue.get()
            print(currentThread().getName(),"GET",i)
            self.lock.release()
            return i
        return None

    def add(self,item):
        self.lock.acquire()
        i = self.queue.put(item)
        print(currentThread().getName(),"ADD",item)
        self.lock.release()
        return i

    def empty(self):
        self.lock.acquire()
        i = self.queue.empty()
        self.lock.release()
        return i

mpq = multiPriorityQueue()
threads = []
for i in range(1,12):
    if (i %2):
        threads.append(Thread(None, mpq.add,i,(randint(1,100),)))
    else:
        threads.append(Thread(None,mpq.get,i))

for item in threads:
    item.start()

for item in threads:
    item.join()
