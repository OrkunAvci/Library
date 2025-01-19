class SinglyLinkedListNode:
    """
    A node in the linked list.

    Attributes:
        data: The data stored in the node.
        next (Node): The next node in the list.
    """

    def __init__(self, data):
        self.data = data
        self.next = None


class SinglyLinkedList:
    """
    A singly linked list data structure.

    This class provides methods for inserting, deleting, and searching for nodes in a sorted linked list.

    Attributes:
        head (Node): The head of the linked list.

    Methods:
        append(data): Appends a new node with the given data to the end of the list.
        print_list(): Prints the data of all nodes in the list.
        search(data): Searches for a node with the given data in the list and returns True if found, False otherwise.
        delete(data): Deletes the node with the given data from the list.
        insert(data): Inserts a new node with the given data into the list, maintaining the sorted order.
                reverse(): Reverses the order of the nodes in the list.
    """

    def __init__(self):
        self.head = None

    def append(self, data):
        """
        Appends a new node with the given data to the end of the list.

        Args:
            data: The data to be stored in the new node.
        """
        new_node = SinglyLinkedListNode(data)
        if self.head is None:
            self.head = new_node
        else:
            current = self.head
            while current.next is not None:
                current = current.next
            current.next = new_node

    def insert(self, data):
        """
        Inserts a new node with the given data into the list maintaining the sorted order.

        Args:
            data: The data to be stored in the new node.
        """
        new_node = SinglyLinkedListNode(data)
        if self.head is None or data < self.head.data:
            new_node.next = self.head
            self.head = new_node
            return

        current = self.head
        while current.next is not None and current.next.data < data:
            current = current.next

        new_node.next = current.next
        current.next = new_node

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
            elif current.data > data:
                return False
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
            return

        current = self.head
        while current.next is not None:
            if current.next.data == data:
                current.next = current.next.next
                return
            current = current.next

    def print_list(self):
        current = self.head
        while current is not None:
            print(current.data)
            current = current.next
