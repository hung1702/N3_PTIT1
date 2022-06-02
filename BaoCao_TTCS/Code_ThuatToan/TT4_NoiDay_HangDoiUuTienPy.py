#TT4_NoiDay_HangDoiUuTien

# A simple implementation of Priority Queue
# w3school: https://www.geeksforgeeks.org/priority-queue-in-python/

class PriorityQueue():
    def __init__(self):
        self.queue = []
  
    def __str__(self):
        return ' '.join([str(i) for i in self.queue])
  
    def isEmpty(self):              # method kiem tra queue co trống ko: len(queue) = 0
        return len(self.queue) == 0

    def push(self, item):         # method chen 1 phan tu vao queue
        self.queue.append(item)
    
    #c++ kha voi python: chi hoac la void hoac returm: nen phai tach 2 ham top() va pop())
    #trong python: 1 ham vua co the kieu void vua co the kieu return 
    #-> tich hop pop() va top() thanh delete (mean: vua lay ra ptu theo muc do uu tien, vua xoa ptu do luon khoi queue)
    # hàm lay ra một phần tử trong queue dựa trên mức độ ưu tiên (sau khi sap xep theo priority queue)
    def delete(self):               
        try:
            min_val = self.queue[1]         #lay thk dau tien la min
            for i in range(len(self.queue)):
                if self.queue[i] < self.queue[min_val]:
                    min_val = i
            item = self.queue[min_val]
            del self.queue[min_val]
            return item
        except IndexError:
            print()
            exit()


def NoiDay(arr, n):
    myQueue=PriorityQueue()
    ans=0
    for i in range(n):
        myQueue.insert(arr[i])
    while(len(myQueue)>1):
        x1=myQueue.delete()
        x2=myQueue.delete()
        x=x1+x2
        ans=ans+x
        myQueue.push(x)
    return ans 

print("Nhap so bo test t = ", end="")
t=int(input())
while(t>0):
    t=t-1
    print("Nhap so ptu mang \nn = ", end="")
    n=int(input())
    arr=[]
    for i in range(n):
        arr.append(int(input()))
    ans=NoiDay(arr, n)
    print("Tong chi phi noi day nho nhat la:", ans)

