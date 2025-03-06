import os
import glob

def delete_exe_files():
    # Get the current working directory
    current_directory = os.getcwd()
    
    # Construct the search pattern to find all .exe files in the current directory
    search_pattern = os.path.join(current_directory, '*.exe')
    
    # Find all .exe files in the current directory
    exe_files = glob.glob(search_pattern)
    
    # Check if any .exe files were found
    if not exe_files:
        print("No .exe files found in the current directory.")
        return
    
    # Delete each .exe file
    for exe_file in exe_files:
        try:
            os.remove(exe_file)
            print(f"Deleted: {exe_file}")
        except Exception as e:
            print(f"Error deleting {exe_file}: {e}")

if __name__ == "__main__":
    delete_exe_files()