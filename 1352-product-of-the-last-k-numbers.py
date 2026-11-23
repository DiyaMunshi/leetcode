
class ProductOfNumbers:

    def __init__(self):
        self.prefix = [1]

    def add(self, num):

        if num == 0:
            self.prefix = [1]
        else:
            product = self.prefix[-1] * num
            self.prefix.append(product)
        return 

    def getProduct(self, k):

        if k >= len(self.prefix):
            return 0

        return self.prefix[-1] // self.prefix[-k-1]
