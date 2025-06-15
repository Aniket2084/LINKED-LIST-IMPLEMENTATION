# LINKED-LIST-IMPLEMENTATION

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: ANIKET KESHRI

*INTERN ID*: CT04DG990

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

##1. *Main Function*: Getting User Input and Performing Operations
The program starts in the main() function. It first asks the user to enter the number of elements in the array (less than 100), then it takes that many integer inputs and stores them in an array.

Next, it calls the display() function to print the elements of the array.

After that, it asks the user to enter a new element and the index at which it should be inserted. The indInsertation() function is used to perform this insertion, and the array size is increased by 1. It then displays the updated array.

Then, the program asks the user for the index of the element to delete. It uses the delete() function to remove that element, shifts the remaining elements to the left, and decreases the array size by 1. The updated array is shown again.

2. *display() Function*: Showing Array Elements
This function takes the array and its size as arguments and prints all the elements using a for loop. It helps the user to see the current state of the array after each operation.

3. *indInsertation() Function*: Inserting an Element
This function is responsible for inserting a new element at a specific index. It works by shifting all the elements from the end of the array toward the right, starting from the last element up to the given index. This creates an empty spot at the desired index, where the new element is placed.

For example, if the array is {1, 2, 3, 4} and we insert 99 at index 2, it becomes {1, 2, 99, 3, 4}.

4. *delete() Function*: Deleting an Element
This function deletes an element at a specified index. It does so by shifting all the elements after the given index one position to the left. This way, the unwanted element is overwritten, and the rest of the array moves forward.

For example, if the array is {1, 2, 3, 4} and you delete the element at index 2, the result becomes {1, 2, 4}.

*Summary*
The program allows inserting and deleting elements at any index.

It uses functions to make the code modular and easy to read.

It handles basic array manipulation without using advanced features or libraries.

The size of the array is manually adjusted after each insert or delete.

The program works well for learning array basics and understanding how to manage array elements.

This program is a simple but effective demonstration of how arrays work and how to perform dynamic changes using basic C code.

#OUTPUT

![Image](https://github.com/user-attachments/assets/1dc9aa6d-8eea-4f82-8a48-9b5b797ed57e)
