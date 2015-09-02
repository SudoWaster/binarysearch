MAX_SECTION = 1000
MIN_SECTION = 0

class BinarySearch(object):
	def __init__(self):
		self.resetValues()

	def resetValues(self):
		self.left = MIN_SECTION
		self.right = MAX_SECTION

	def getGuessed(self):
		self.resetValues()
		
		while self.isNotGuessed():
			self.setNewGuessedNumbers()
			
		return self.left
	
	def isNotGuessed(self):
		return (self.left < self.right)
		
	def setNewGuessedNumbers(self):
		self.middle = int((self.left + self.right)/2)
		
		if self.isSectionRight():
			self.right = self.middle
		else:
			self.left = self.middle + 1
	
	def isSectionRight(self):
		print("<% d, % d>?" % (self.left, self.middle))
		return self.isAccepted()
		
	def isAccepted(self):
		answer = " "
		while not (answer == "y" or answer == "n"):
			answer = input(" (y/n) ")
			answer = answer[0]
			
		return answer == "y"
		
numberseeker = BinarySearch()
print(numberseeker.getGuessed())
