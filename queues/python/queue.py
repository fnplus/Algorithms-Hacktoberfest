class Queue:
	def __init__(self):
		self.queue = []

	# Return true if the queue is empty false otherwise
	def isEmpty(self):
		return self.queue == []

	# Add item to the beginning of the queue
	def enqueue(self, item):
		self.queue.insert(0,item)
		print(str(item) + " has been enqueued.")

	# Remove and return the first item in the queue if not empty
	def dequeue(self):
		try:
			print(str(self.queue[-1]) + " has been dequeued.")
			return self.queue.pop()
		except IndexError:
			print("Can't dequeue from an empty queue.")

	# Return the front element of the queue if it exists
	def front(self):
		try:
			print(str(self.queue[-1]) + " is in the front.")
			return self.queue[-1]
		except:
			print("Queue is empty.  Nothing is in the front.")

	# Return the number of items in the queue
	def length(self):
		return len(self.queue)

	# Print the contents of the queue
	def print(self):
		print(self.queue)

	# Dequeue all items from the queue
	def clear(self):
		while not self.isEmpty():
			self.dequeue()
		print("The queue is clear.")


def main():
	my_queue = Queue()
	my_queue.front()
	my_queue.enqueue(5)
	my_queue.dequeue()
	my_queue.dequeue()
	my_queue.enqueue(3)
	my_queue.enqueue(8)
	my_queue.print()
	my_queue.front()
	my_queue.enqueue(2)
	my_queue.enqueue(4)
	my_queue.print()
	my_queue.clear()

if __name__ == "__main__":
	main()