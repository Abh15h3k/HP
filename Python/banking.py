from threading import Thread, currentThread, Lock

balance = 1000
lock = Lock()

def transact(change):
    lock.acquire()
    global balance
    if (balance + change < 1000):
        print(currentThread().getName(),"Balance too low")
    else:
        print(currentThread().getName(),"Before",balance)
        balance = balance + change
        print(currentThread().getName(),"After",balance)
    lock.release()

threads = []
for i in range(1,11):
    if (i %2):
        threads.append(Thread(None,transact,i,(-100,)))
    else:
        threads.append(Thread(None,transact,i,(100,)))

for item in threads:
    item.start()


