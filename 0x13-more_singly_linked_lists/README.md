0x13. C - More singly linked lists
C AlgorithmData structure

Tasks
Number 0. Task: Print list (mandatory)
Write a function that prints all the elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf

Number 1. Task: List length (mandatory)
Write a function that returns the number of elements in a linked listint_t list.
Prototype: size_t listint_len(const listint_t *h);

Number 2. Task: Add node (mandatory)
Write a function that adds a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

Number 3. Task: Add node at the end (mandatory)
Write a function that adds a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

Number 4. Task: Free list (mandatory)
Write a function that frees a listint_t list.
Prototype: void free_listint(listint_t *head);

Number 5. Task: Free (mandatory)
Write a function that frees a listint_t list.
Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL

Number 6. Task: Pop (mandatory)
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0

Number 7. Task: Get node at index (mandatory)
Write a function that returns the nth node of a listint_t linked list.
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL

Number 8. Task: Sum list (mandatory)
Write a function that returns the sum of all the data (n) of a listint_t linked list.
Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0

Number 9. Task: Insert (mandatory)
Write a function that inserts a new node at a given position.
Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL

Number 10. Task: Delete at index (mandatory)
Write a function that deletes the node at index index of a listint_t linked list.
Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed

Number 11. Task: Reverse list (#advanced)
Write a function that reverses a listint_t linked list.
Prototype: listint_t *reverse_listint(listint_t **head);
Returns: a pointer to the first node of the reversed list
You are not allowed to use more than 1 loop.
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function

Number 12. Task: Print (safe version) (#advanced)
Write a function that prints a listint_t linked list.
Prototype: size_t print_listint_safe(const listint_t *head);
Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status 98
Output format: see example

Number 13. Task: Free (safe version) (#advanced)
Write a function that frees a listint_t list.
Prototype: size_t free_listint_safe(listint_t **h);
This function can free lists with a loop
You should go though the list only once
Returns: the size of the list that was free’d
The function sets the head to NULL

Number 14. Task: Find the loop (#advanced)
Write a function that finds the loop in a linked list.
Prototype: listint_t *find_listint_loop(listint_t *head);
Returns: The address of the node where the loop starts, or NULL if there is no loop
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function
