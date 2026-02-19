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

Node Structure (Linked List)

Each node represents one customer order and stores:
- An array of menu item codes (10 items)
- A pointer to the next order in the queue

Conceptually:

``` Order → Order → Order → NULL ```

So every customer order becomes one linked list node.
