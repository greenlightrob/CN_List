# CN_List
A C library that implements Circular Doubly-Linked Lists in C.

Linked Lists are among the simplest of data structures. In C++, these are included in the STL library as Doubly Linked Lists which you can use by using "#include &lt;list&gt;". But what about in C? You have to make it yourself or use a library that someone else wrote for you.

CN_List is a generic list container capable of holding any data type of any size. This is because you specify the type while initiating the list. All nodes created in that list will, therefore, be able to hold that number of bytes. It is dynamically resizable, of course. It is different from STL Lists though, as it is also <u><b>circular</b></u>. Therefore, the first node is directly linked to the last node and all operations involving the first or last node are in <u><b>constant time</b></u>. All operations that involve modifying an entry in between the first and last node is <b><u>linear time</u></b>.

Full documentation at: <a href = "http://web.eecs.utk.edu/~ssmit285/lib/cn_list/index.html">http://web.eecs.utk.edu/~ssmit285/lib/cn_list/index.html</a></br>The documentation has details and examples on every single function in the library, as well as a guide comparing it to C++ Lists.
