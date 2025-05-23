import os

def delFile(ext):
    if not ext.startswith('.'):
        ext = '.' + ext

    del_files = []

    for root, dirs, files in os.walk('.'):
        for file in files:
            if file.endswith(ext):
                file_path = os.path.join(root, file)
                os.remove(file_path)
                del_files.append(file_path)
                print(f"Deleted: {file_path}")

                
    if not del_files:
        print(f"No files found with extention {ext}")


ext = input("Enter the extension: ")
delFile(ext)

