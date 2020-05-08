import threading
import time
def myfunc(name,delay):
    count = 0
    while count < 5:
        time.sleep(delay)
        count += 1
        print(name,delay)

thread_1 = threading.Thread(None,myfunc,"thread_1",("thread_1",1))
thread_2 = threading.Thread(None,myfunc,"thread_2",("thread_2",2))
thread_1.start()
thread_2.start()
