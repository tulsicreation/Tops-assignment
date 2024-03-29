                                MODULE: 5 (Database)

1> What do you understand By DatabasE ?

--> A database is an organized collection of structured information, or data, typically stored electronically in a computer system. A database is usually controlled by a database management system (DBMS).

2> What is Normalization?

-->Normalization is a database design technique that reduces data redundancy and eliminates undesirable characteristics like Insertion, Update and Deletion Anomalies. Normalization rules divides larger tables into smaller tables and links them using relationships. The purpose of Normalisation in SQL is to eliminate redundant (repetitive) data and ensure data is stored logically.

3>What is Difference between DBMS and RDBMS ?

--> 
RDBMS	    DBMS
a)--Data stored is in table format	
  --Data stored is in the file format

b)--Multiple data elements are accessible together	
  --Individual access of data elements

c)--Data in the form of a table are linked together	
  --No connection between data

d)--Normalisation is not achievable	
  --There is normalisation

e)--Support distributed database	
  --No support for distributed database

f)--Data is stored in a large amount	
  --Data stored is a small quantity

g)--RDBMS supports multiple users	
  --DBMS supports a single user

h)--Oracle, SQL Server.	
  --XML, Microsoft Access.


4)  What is MF Cod Rule of RDBMS Systems ?

-->
Rule 0: The Foundation Rule
Rule 1: The Information Rule
Rule 2: The Guaranteed Access Rule
Rule 3: The Systematic Treatment of Null Values
Rule 4: The Dynamic/Active Online Catalog on the basis of the Relational Model
Rule 5: The Comprehensive Data SubLanguage Rule
Rule 6: The View Updating Rule
Rule 7: The Relational Level Operation (or High-Level Insert, Delete, and Update) Rule
Rule 8: The Physical Data Independence Rule
Rule 9: The Logical Data Independence Rule
Rule 10: The Integrity Independence Rule
Rule 11: The Distribution Independence Rule
Rule 12: The Non-Subversion Rule

5) What do you understand By Data Redundancy ?

--> Data redundancy occurs when the same piece of data exists in multiple places, whereas data inconsistency is when the same data exists in different formats in multiple tables. Unfortunately, data redundancy can cause data inconsistency, which can provide a company with unreliable and/or meaningless information.

6)  What is DDL Interpreter ?

--> DDL Interpreter DDL expands to Data Definition Language. DDL Interpreter as the name suggests interprets the DDL statements such as schema definition statements like create, delete, etc. The result of this interpretation is a set of a table that contains the meta-data which is stored in the data dictionary.

7) What is DML Compiler in SQL ?

--> A DML (data manipulation language) refers to a computer programming language that allows you to add (insert), delete (delete), and alter (update) data in a database. A DML is typically a sublanguage of a larger database language like SQL, with the DML containing some of the language's operators.

8)  What is SQL Key Constraints writing an Example of SQL Key Constraints ?

--> SQL constraints are used to specify rules for the data in a table. Constraints are used to limit the type of data that can go into a table. This ensures the accuracy and reliability of the data in the table. If there is any violation between the constraint and the data action, the action is aborted.

  example : Constraint	Description

            NOT NULL	        values cannot be null
            UNIQUE	        values cannot match any older value
            PRIMARY KEY	        used to uniquely identify a row
            FOREIGN KEY	        references a row in another table
            CHECK	        validates condition for new value
            DEFAULT	        set default value if not passed
            CREATE INDEX	used to speedup the read process

9) What is save Point? How to create a save Point write a Query ?

--> The SAVEPOINT in MySQL is used for dividing (or) breaking a transaction into multiple units so that the user has a chance of roll backing the transaction up to a specified point. That means using Save Point we can roll back a part of a transaction instead of the entire transaction.

--> The SAVEPOINT statement in MySQL is used to save a transaction temporarily. We can save multiple SAVEPOINT in a single transaction. We can ROLLBACK the transaction to a given SAVEPOINT and the transaction after that SAVEPOINT are revert back to its previous state. We cannot ROLLBACK to a SAVEPOINT after the COMMIT statement.

In order to create a save point or you can say logical point, we need to use the SAVEPOINT command followed by the save point name i.e. SAVEPOINT SAVEPOINT_NAME and ROLLBACK to the SAVEPOINT are ROLLBACK TO SAVEPOINT_NAME.

In order to understand this better please have a look at the following image. As you can see in the following image, first we start a transaction and then create three Save Points (Logical Points and Check Point) using the SAVEPOINT command.

As per the definition, it will roll back the statements which are present after the SAVEPOINT and before the Rollback Statement. As we created three save points (SavePoint1, SavePoint2, and SavePoint3), let us understand what happens when we execute a particular savepoint with the rollback command.

10) What is trigger and how to create a Trigger in SQL ?

--> A trigger in SQL is a procedural code that is automatically executed in response to certain events on a specified table. It is important to understand how these small codes make such a huge difference in database performance.

--> Create trigger [trigger_name]: Creates or replaces an existing trigger with the trigger_name.
[before | after]: This specifies when the trigger will be executed.
{insert | update | delete}: This specifies the DML operation.
On [table_name]: This specifies the name of the table associated with the trigger.
[for each row]: This specifies a row-level trigger, i.e., the trigger will be executed for each affected row.
[trigger_body]: This provides the operation to be performed as the trigger is fired


 52 changes: 52 additions & 0 deletions52 