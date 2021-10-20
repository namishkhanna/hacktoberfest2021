// check if the linked list has loop or not 

// output: Loop Found



let head; //head of list
 
	class Node {
		constructor(val) {
			this.data = val;
			this.next = null;
		}
	}

	// Inserts a new Node at front of list
	function push(new_data) {

	// Allocate the Node 
    let new_node = new Node(new_data);
		
		new_node.next = head; //make next new node as head
		
		head = new_node; // Move the head to point to new Node
	}

	// returns true if there is a loop in linked else false
	function detectLoop(h) {
		let s = new Set();
		while (h != null) {

			// If already have this node in hashmap it means their is a cycle
			if (s.has(h)){
				return true;
            }
			// If node is new, insert it in hash
			s.add(h);

			h = h.next;
		}

		return false;
	}

	// to test above function
		push(21);
		push(8);
		push(12);
		push(10);

		/* Create loop for testing */
		head.next.next.next.next = head;

		if (detectLoop(head)){
			console.log("Loop found");
		}
		else {
			console.log("No Loop");
}
