# Student Marks Analyzer (C)

A beginner-friendly command-line project written in C. It accepts marks for multiple subjects and displays a student's summary.

## Features

- Takes the number of subjects as input (1–100).
- Accepts marks from 0 to 100 for each subject.
- Calculates total marks and average percentage.
- Finds the highest and lowest marks.
- Displays PASS if every subject has at least 40 marks; otherwise displays FAIL.
- Assigns a grade based on the average percentage.
- Checks input ranges to catch invalid entries.

## Grade scale used

| Average percentage | Grade |
|---:|:---|
| 90–100 | A+ |
| 80–89.99 | A |
| 70–79.99 | B |
| 60–69.99 | C |
| 40–59.99 | D |
| Below 40 | F |

**Note:** This is a sample grading scale for the project. Change it to match your institution's rules if needed.

## How to compile and run

### GCC (Windows / Linux / macOS)

```bash
gcc student_marks_analyzer.c -o student_marks_analyzer
```

Run on Windows:

```bash
student_marks_analyzer.exe
```

Run on Linux/macOS:

```bash
./student_marks_analyzer
```

## Example

```text
====================================
       STUDENT MARKS ANALYZER
====================================
Enter the number of subjects (1-100): 5

Enter marks for each subject (0-100):
Subject 1: 85
Subject 2: 92
Subject 3: 76
Subject 4: 88
Subject 5: 79

========== RESULT ==========
Total marks : 420.00 / 500.00
Percentage  : 84.00%
Highest mark: 92.00
Lowest mark : 76.00
Status      : PASS
Grade       : A
============================
```

## Concepts used

- Variables and data types
- Arrays
- `for` loops
- `if-else` conditions
- Input/output with `scanf()` and `printf()`
- Basic validation

## Possible improvements

- Store results for multiple students.
- Add subject names.
- Save results to a file.
- Use functions to separate each calculation.
