
# SETS

Sets are containers that store `unique elements` following a `specific order`.

In a set, the value of an element also identifies it (the value is itself the key, of type T), and each value must be unique. The value of the elements in a set cannot be modified once in the container (the elements are always const), but they can be inserted or removed from the container.

Internally, the elements in a set are always sorted following a specific strict weak ordering criterion indicated by its internal comparison object (of type Compare).

Sets are typically implemented as binary search trees.

The first useful property of the set is that it contains only distinct elements of course the variation multiset can even contain repeated elements.
Set contains the distinct elements in an ordered manner whereas unordered set contains distinct elements in an unsorted order and multimaps contain repeated elements.

## TYPES OF SET

1. Ordered Sets -> default
2. Unordered Sets
3. MultiSets

-   Set (set<int> s) is the implementation of `Binary Search Trees`. Time Complexity : `log(n)`
-   Unordered set (unordered_set<int> S) is the implementation of `Hash Table`. Time Complexity : `O(1)`
-   Multiset (multiset<int> S) is implementation of `Red-Black trees`. Time Complexity : `log(n)`
-   The complexity becomes Theta(1) and O(n) when using unordered<set> the ease of access becomes easier due to Hash Table implementation.

## Ordered Set

Values are stored in `ordered` format.

Ordered set containers are generally slower than unordered_set containers to access individual elements by their key, but they allow the direct iteration on subsets based on their order.

### Declaring a Set

```cpp
set <data_type> identifier;
//Eg:-
set <string> s;
set <int> s;
set <map<int,int>> s;
set <pair<int,int>> s;
```

### FUNCTIONS

1. Inserting values

```cpp
    s.insert("abc");
    s.insert("xyz");
    s.insert("pqr");
```

Time Complexity : log(n)

2. Accessing Values

We cannot use s[] like we did in maps.

```cpp
    auto it = s.find("abc");    // log(n)
    if(it != s.end()){
        cout << *(it) << endl;
    }
```

Time Complexity : log(n)

#### .end() and .find()

.end() : Returns the value of last iterator, i.e. the `iterator of last element + 1`
.find() : Returns the `iterator` of the value and if value is `not present` in our set, then `returns the end()` iterator

3. Deleting Elements

We can either pass an iterator or a value

```cpp
s.erase(it); // passing iterator
s.erase("bcd"); // passing value
```

4. Printing

```cpp
// 1: more efficient
for(string value: s){
        cout << value << endl;
    }
```

5. lower_bound()

It's either returns the value we are searching for, or it returns the next value that comes after that value.
If value is not present, then it returns a garbage value

Usuall Syntax:

```cpp
int *ptr = lower_bound(starting address, ending address+1, element to find);
auto it = lower_bound(s.begin(), s.end(), 5);
```

**Mistake:** This is a wrong approach in case of Sets and Maps as this gives TLE if the limits exceds.
Time Complexity: O(n)

Correct Way:

```cpp
auto it = s.lower_bound(5);
```

Time Complexity: log(n)

6. Upper_bound()

Only returns the next bigger value.

```cpp
auto it = s.upper_bound(5);
```

## Unordered Set

Values are stored in `unordered` format.

Time Complexity for all functions: O(1)

##### When to use?

When we need to check if in our set, a certain value is present or not.

### Declaring a Set

```cpp
unordered_set <data_type> identifier;
unordered_set <string> s;
```

## NOTE:

We can only store basic data types in Unordered Sets since there hash functions are not defined in inbuild cpp standard library, these are defined in a library called boost, but we cannot use it in Competative Programming.

Wrong:

```cpp
unordered_set <set<string>> s;
unordered_set <pair<int, string>> s;
```

### FUNCTIONS

1. Inserting values

```cpp
    s.insert("abc");
    s.insert("xyz");
    s.insert("pqr");
```

Time Complexity : O(1)

2. Accessing Values

```cpp
    auto it = s.find("abc");
    if(it != s.end()){
        cout << *(it) << endl;
    }
```

Time Complexity : O(1)

3. Deleting Elements

We can either pass an iterator or a value

```cpp
s.erase(it); // passing iterator
s.erase("bcd"); // passing value
```

4. Printing

```cpp
// 1: more efficient
for(string value: s){
        cout << value << endl;
    }
```

```cpp
auto it = s.upper_bound(5);
```

## MultiSet

Used to store multiple values
Values are still stored in ordered format

Time Complexity: log(n)

**Best Use Case:** better implements priority queues (sorted order storage and store multiple-duplicate values)
priority queues are used more in Graphs, so we can use multisets instead of priority queues.

### Declaring a Multi-Set

```cpp
multiset <data_type> identifier;
multiset <string> s;
```

### FUNCTIONS

1. .find()
   returns the iterator of the first value

```cpp
auto it = s.find("abc");
```

2. Inserting values

```cpp
    s.insert("abc");
    s.insert("xyz");
    s.insert("pqr");
```

Time Complexity : log(n)

3. Accessing Values

```cpp
    auto it = s.find("abc");
    if(it != s.end()){
        cout << *(it) << endl;
    }
```

Time Complexity : log(n)

4. Deleting Elements

We can either pass an iterator or a value

-   If we pass an iterator, then only one value will be deleted
-   If we pass a value, then all the values in our multiset will be deleted

```cpp
s.erase(it); // passing iterator
s.erase("bcd"); // passing value
```

5. Printing

```cpp
// 1: more efficient
for(string value: s){
        cout << value << endl;
    }
```

6. lower_bound()

```cpp
auto it = s.lower_bound(5);
```

Time Complexity: log(n)

7. Upper_bound()

Only returns the next bigger value.

```cpp
auto it = s.upper_bound(5);
```
