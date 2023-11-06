class Queue {
  constructor() {
    this.queue = [];
  }
  // add element to the end of the queue
  enqueue(element) {
    this.queue.push(element);
  }

  isEmpty() {
    return this.queue.length == 0;
  }
  // remove element
  dequeue() {
    if (!this.isEmpty()) {
      return this.queue.shift();
    } else {
      console.log("overflow");
    }
  }

  front() {
    if (!this.isEmpty()) {
      return this.queue[0];
    } else {
      console.log("it is empty");
    }
  }
  display() {
    const str = "";
    for (let i = 0; i < this.queue.length; i++) {
      console.log(this.queue[i]);
    }
  }
}

const obj = new Queue();
obj.enqueue(5);
obj.enqueue(3);
obj.enqueue(1);
obj.enqueue(51);

obj.dequeue();
console.log(obj.front());
