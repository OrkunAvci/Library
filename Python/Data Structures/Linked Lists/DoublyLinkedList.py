class DoublyLinkedListNode:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None


class DoublyLinkedList:
    def __init__(self):
        self.head = None

    def print_list(self):
        current = self.head
        while current is not None:
            print(current.data)
            current = current.next

    def append(self, data):
        """
        Appends a new node with the given data to the end of the list.

        Args:
                data: The data to be stored in the new node.
        """
        new_node = DoublyLinkedListNode(data)

        if self.head is None:
            self.head = new_node
            return

        current = self.head
        while current.next is not None:
            current = current.next

        if current.next.next is not None:
            current.next.next.prev = new_node
            new_node.next = current.next
        current.next = new_node
        new_node.prev = current

    def reverse(self):
        """
        Reverses the order of the nodes in the doubly linked list.

        This method iterates through the list, swapping the next and previous
        pointers of each node. Once all nodes have been processed, it updates
        the head of the list to point to the new head (previously the tail).
        """
        current = self.head
        while current is not None:
            current.next, current.prev = current.prev, current.next
            current = current.prev
        self.head = current

    def search(self, data):
        """
        Searches for a node with the given data in the list and returns True if found, False otherwise.

        Args:
                data: The data to be searched for.

        Returns:
                bool: True if the data is found, False otherwise.
        """
        current = self.head
        while current is not None:
            if current.data == data:
                return True
            current = current.next
        return False

    def delete(self, data):
        """
        Deletes the node with the given data from the list.

        Args:
                data: The data of the node to be deleted.
        """
        if self.head is None:
            return

        if self.head.data == data:
            self.head = self.head.next
            if self.head is not None:
                self.head.prev = None
            return

        current = self.head
        while current.next is not None:
            if current.next.data == data:
                current.next = current.next.next
                if current.next is not None:
                    current.next.prev = current
                return
            current = current.next
