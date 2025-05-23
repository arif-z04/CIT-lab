# 📂 File Handling in C

## 📌 What is File Handling?
File handling in C allows reading and writing data to files stored on disk. It enables persistent storage beyond program execution.

---

## 📄 File Modes
C provides various modes to open a file:

| Mode   | Description |
|--------|------------------------------------------------------|
| `r`    | Read only (file must exist) |
| `w`    | Write only (creates or overwrites the file) |
| `a`    | Append only (adds data at the end) |
| `r+`   | Read & write (file must exist) |
| `w+`   | Read & write (creates or overwrites the file) |
| `a+`   | Read & append (file is not cleared) |

---

## 📥 Opening & Closing a File
```c
FILE *fp;
fp = fopen("data.txt", "r");  // Open in read mode
if (fp == NULL) {
    printf("Error opening file!\n");
    return 1;
}
fclose(fp);  // Close the file
```

### 🔹 Function Usages
- `fopen(filename, mode)`: Opens a file in the specified mode.
- `fclose(fp)`: Closes the opened file.

---

## 📜 Reading Data from a File

### 1️⃣ Read Character-by-Character (`fgetc`)
```c
FILE *fp = fopen("data.txt", "r");
char ch;
while ((ch = fgetc(fp)) != EOF) {
    printf("%c", ch);
}
fclose(fp);
```

### 🔹 Function Usages
- `fgetc(fp)`: Reads a single character from the file.

### 2️⃣ Read Line-by-Line (`fgets`)
```c
FILE *fp = fopen("data.txt", "r");
char line[100];
while (fgets(line, sizeof(line), fp)) {
    printf("%s", line);
}
fclose(fp);
```

### 🔹 Function Usages
- `fgets(buffer, size, fp)`: Reads a line from the file.

### 3️⃣ Read Word-by-Word (`fscanf`)
```c
FILE *fp = fopen("data.txt", "r");
char word[50];
while (fscanf(fp, "%s", word) != EOF) {
    printf("%s\n", word);
}
fclose(fp);
```

### 🔹 Function Usages
- `fscanf(fp, format, variables...)`: Reads formatted input from the file.

---

## ✍ Writing Data to a File

### 1️⃣ Write Character-by-Character (`fputc`)
```c
FILE *fp = fopen("output.txt", "w");
fputc('A', fp);
fclose(fp);
```

### 🔹 Function Usages
- `fputc(character, fp)`: Writes a single character to the file.

### 2️⃣ Write Line-by-Line (`fputs`)
```c
FILE *fp = fopen("output.txt", "w");
fputs("Hello, World!", fp);
fclose(fp);
```

### 🔹 Function Usages
- `fputs(string, fp)`: Writes a string to the file.

### 3️⃣ Write Formatted Data (`fprintf`)
```c
FILE *fp = fopen("output.txt", "w");
fprintf(fp, "Name: %s, Age: %d\n", "Alice", 25);
fclose(fp);
```

### 🔹 Function Usages
- `fprintf(fp, format, values...)`: Writes formatted output to the file.

---

## 🔄 Appending Data to a File (`a` Mode)
```c
FILE *fp = fopen("output.txt", "a");
fprintf(fp, "New Line of Data\n");
fclose(fp);
```

### 🔹 Function Usages
- `fopen("filename", "a")`: Opens a file in append mode.

---

## 🚀 Advanced Operations

### ✅ Reset File Pointer (`rewind`)
```c
FILE *fp = fopen("data.txt", "r");
rewind(fp);  // Moves pointer to the beginning
```

### 🔹 Function Usages
- `rewind(fp)`: Resets file pointer to the beginning.

### ✅ Check End of File (`feof`)
```c
while (!feof(fp)) {
    ch = fgetc(fp);
    printf("%c", ch);
}
```

### 🔹 Function Usages
- `feof(fp)`: Returns true if the file pointer reaches the end of the file.

### ✅ Read & Write Without Overwriting (`r+` Mode)
```c
FILE *fp = fopen("data.txt", "r+");
fputs("New data", fp);
fclose(fp);
```

### 🔹 Function Usages
- `fopen("filename", "r+")`: Opens a file for reading and writing without overwriting.

---

## ⚠ Common Mistakes & Solutions

| Issue | Solution |
|--------|------------------------------------------------------|
| File not opening | Check if the file exists (for `r` mode) |
| Data not written | Ensure file is opened in `w`, `w+`, or `a` mode |
| Infinite loops | Use `feof(fp)` or `EOF` to check end of file |

---

## 🎯 Summary
✅ Use `fopen()` to open files, `fclose()` to close files.  
✅ Read files using `fgetc()`, `fgets()`, or `fscanf()`.  
✅ Write files using `fputc()`, `fputs()`, or `fprintf()`.  
✅ Always **check if `fopen()` fails** before proceeding.  
✅ Use `rewind()` to reset the file pointer if needed.  

🚀 **Master file handling for real-world C projects!**

