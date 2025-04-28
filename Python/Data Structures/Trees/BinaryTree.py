class BinaryTreeNode:
    def __init__(self, data):
        self.data = data
        self.parent = None
        self.left = None
        self.right = None


class BinaryTree:
    def __init__(self):
        self.root = None

    def insert(self, data):
        """
        Inserts a new node with the given data into the binary tree.

        If the tree is empty, the new node becomes the root. Otherwise, the new node is inserted into its correct position
        to maintain the binary search tree property.

        Args:
            data: The data to be stored in the new node.
        """
        if self.root is None:
            self.root = BinaryTreeNode(data)
            return

        node = BinaryTreeNode(data)
        self._insert_node(node)

    def _insert_node(self, node):
        """
        Inserts a node into the binary tree while maintaining the binary search tree property.

        If the node is None, the function returns immediately. If the tree is empty, the node becomes the root.
        Otherwise, the node is inserted into its correct position based on its data value.

        Args:
            node (BinaryTreeNode): The node to be inserted into the tree.
        """
        if node is None:
            return

        if self.root is None:
            self.root = node
            return

        current = self.root
        while True:
            if node.data < current.data:
                if current.left is None:
                    current.left = node
                    node.parent = current
                    break
                current = current.left
            else:
                if current.right is None:
                    current.right = node
                    node.parent = current
                    break
                current = current.right

    def search(self, data):
        """
        Searches for a node with the given data in the binary tree.

        Args:
            data: The data to be searched for.

        Returns:
            BinaryTreeNode: The node with the given data if found, None otherwise.
        """
        node = self.root
        while node is not None and node.data != data:
            if data < node.data:
                node = node.left
            else:
                node = node.right
        return node

    def delete(self, data):
        """
        Deletes the node with the given data from the binary tree.

        If the node is not found, the tree is left unchanged.

        Args:
            data: The data to be searched for and deleted.
        """
        node = self.search(data)
        if node is None:
            return

        childeren = [node.left, node.right]
        if node.parent is not None:
            if node.parent.left == node:
                node.parent.left = None
            else:
                node.parent.right = None
            for child in childeren:
                self._insert_node(child)

    def _min(self, node):
        while node.left is not None:
            node = node.left
        return node
