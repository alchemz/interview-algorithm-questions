#Linke List Practise

# a single unit in a linked list
class Element(object):
	def __init__(self, value):
		self.value = value
		self.next = None

# Set up a linkedlist class
class LinkedList(object):
	def __init__(self, head = None):
		self.head = head #initialize the head element

	# method that adds new element to linkedlist
	def append(self, new_element):
		current = self.head
		if self.head:
			while current.next:
				current = current.next
			#iterate through the next reference in every element, until reach the end of list
			#set next for the end of list to be the new_element
			current.next = new_element
		else:
			self.head = new_element



