class Node {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}
class BST {
  constructor() {
    this.root = null;
  }

  insertRecursively(root, value) {
    const newNode = new Node(value);
    if (root == null) {
      root = newNode;
      return this;
    }

    let temp = root;

    if (newNode.value === temp.value) return undefined;
    if (newNode.value < temp.value) {
      temp.left = this.insertRecursively(temp.left, value);
    } else {
      temp.right = this.insertRecursively(temp.right, value);
    }
  }
  Insert(value) {
    this.root = this.insertRecursively(this.root, value);
    return this;
  }
  RecursiveContain(root, value) {
    if (root === null) return false;

    if (root.value < value) {
      return this.RecursiveContain(root.right, value);
    } else if (root.value > value) {
      return this.RecursiveContain(root.left, value);
    } else {
      return true;
    }
  }

  Contain(value) {
    return this.RecursiveContain(this.root, value);
  }
}

let myTree = new BST();
myTree.Insert(53);
myTree.Insert(35);
myTree.Insert(13);
myTree.Insert(15);
myTree.Insert(54);

console.log(myTree.Contain(54));
