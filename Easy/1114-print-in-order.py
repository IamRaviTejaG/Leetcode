# Topic: Concurrency
#
# Author: Ravi Teja Gannavarapu
#
# Difficulty: Easy
#
# https://leetcode.com/problems/print-in-order/


class Foo:
    def __init__(self):
        self.firstDone = False
        self.secondDone = False


    def first(self, printFirst: 'Callable[[], None]') -> None:
        
        # printFirst() outputs "first". Do not change or remove this line.
        printFirst()
        self.firstDone = True


    def second(self, printSecond: 'Callable[[], None]') -> None:
        while not self.firstDone:
            continue
        # printSecond() outputs "second". Do not change or remove this line.
        printSecond()
        self.secondDone = True


    def third(self, printThird: 'Callable[[], None]') -> None:
        while not self.secondDone:
            continue
        # printThird() outputs "third". Do not change or remove this line.
        printThird()
