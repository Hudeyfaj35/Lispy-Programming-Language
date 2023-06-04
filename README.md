# Lispy-Programming-Language
This is my attempt at creating my own Lisp programming language in C following the tutorial of Daniel Holden. If you want to see the finished product, see Lispy_ver0.0.0.1.0.c

Ver0.0.0.0.1: An interactive prompt that takes input and responds with a funny comment

Ver0.0.0.0.2: Adding parser functionality so that we can do math in polish notation (ex. 5 + 4 == + 5 4)

Ver0.0.0.0.3: Adding evaluation functionality so that the language can take math equations and give correct responses

Ver0.0.0.0.4: Adding Error Handling to the language in instances where users try to divide by 0 or use incorrect operators

Ver0.0.0.0.5: Adding S-Expressions(Symbolic Expressions) to the language. Much of the actual output stays the same we've just changed how the lisp works

Ver0.0.0.0.6: Adding Q-Expressions(Quoted Expressions) to the language. These expressions when passed to the evaluation function are left exactly the same, which allows us to store and manipulate variables and in turn allow us to create our first builtin functions

Ver0.0.0.0.7: Using Pointers to create the illusion of variables in our language

Ver0.0.0.0.8: Allowing users to create their own user-defined functions

Ver0.0.0.0.9: Adding conditionals to our language for comparison and ordering

Ver0.0.0.1.0: Adding strings and comments into the language, and also load functionality so that it can read and load files, which will be used when we create a standard library

Standardlibrary.lspy: The aforementioned Lispy Standard Library
