# Q-29: What relationship is appropriate for Course and Faculty?

# ans:
# Confuse whether i create an enroll table with student and course or
# courses_assigned table using faculty and course and
# then create an enroll table with a foreign key of courses_assigned table.

# This model is for an educational institute system, where users are students and faculty members.
# Courses are assigned to faculty members and students are enrolled in courses.

# System will show courses and their instructors(faculty members) to each student which he or
# she has to study and faculty members will see record of all students of a particular section which he or she has to teach.

# One Course can have many Sections. "One-to-many".
# That is handled via a course_id column in the Sections table.

# Many Students take many Courses. "Many-to-many".
# That is handled by a many:many table with two columns: course_id and section_id.
# Note that you can find the course_id from the Sections table.

# Facilty:Sections is also many:many.

# I don't know where you are going with "OneToOneField".
# Generally it is not good to have two tables in a one-to-one relationship.
