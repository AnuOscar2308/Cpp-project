## Title:

Food Delivery Order Management System using Queue (C++)

## Executive Summary:

This project implements a simple food delivery order management system using a queue data structure in C++. Customers select a delivery location and order menu items, which are stored in a queue and processed sequentially. After delivery confirmation, the order is removed from the queue.

The program demonstrates how real-world order processing systems follow a First-In-First-Out (FIFO) workflow, ensuring fairness and organized handling of customer requests.

## Business Problem:
Food delivery services must process orders in the order they are received. Without a proper system:
- Orders may be skipped
- Deliveries may happen out of sequence
- Customer satisfaction decreases
- Manual tracking becomes error-prone

This project simulates a structured order handling system where orders are stored and processed in sequence, similar to real delivery platforms.

## Methodology:
### 1) Data Structure Used
A Queue (FIFO) is implemented using a linked list to store customer orders.

Each order represents one customer’s purchase containing multiple menu items.
The queue ensures:
  The first customer who places an order is the first customer whose order is delivered.

### 2) Internal Data Structure Design (Queue + Linked List)
The queue is not created using built-in containers — it is manually implemented using a singly linked list.

**Node Structure (Linked List)**

  Each node represents one customer order and stores:
  - An array of menu item codes (10 items)
  - A pointer to the next order in the queue
  
  Conceptually:
  
  ``` Order → Order → Order → NULL ```
  
  So every customer order becomes one linked list node.

**Queue Structure**

  The queue maintains two pointers:
  - front -> the order currently being delivered
  - rear -> the most recently placed order
  
  This allows efficient operations:
  
  - Enqueue: New node attached to the rear
  - Dequeue: Front node removed
  - Display: Reads data from the front node

**The flow of orders through a system**

  When a customer places an order
  - Menu items stored in an array
  - A new linked list node is created
  - Node added to the rear of the queue
  
  Meaning:
  The customer joins the waiting delivery line.

**When delivery is confirmed**
- Front node is removed
- Next order becomes the new front

Meaning:
Next customer in line gets their order delivered. 

## Skills:
- **Programming:** C++, Structures and pointers, Memory management
- **Data Structures:** Linked List, Queue implementation, FIFO processing
- **Problem Solving:** Input validation, Sequential order handling
- **Computer Science Concepts:** Dynamic allocation, Abstract data structure design

## Results
- Orders stored and processed in the correct sequence
- Prevents skipping of customers
- Simulates real-time delivery confirmation workflow
- Demonstrates queue suitability for service systems

## Business Recommendation
Queue-based systems should be used for:
- Food delivery apps
- Ticket booking systems
- Call centers
- Hospital patient registration

FIFO ensures fairness and operational clarity.
