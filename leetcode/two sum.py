class twosum:
    box = list()
    arr_nums = ""
    def get_num(self):
        self.arr_nums = str(input())
        self.arr_nums = self.arr_nums.replace("[","").replace("]","").replace(",","")
        for i in self.arr_nums:
            self.box.append(i)
        return self.arr_nums
    def prt(self):
        for i in self.box:
            print(i + " ",end="")
num = twosum()
num.get_num()
num.prt()
