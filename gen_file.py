import os

start_number = 10
end_number = 31

# 指定文件夹路径
folder_path = "./"

for i in range(start_number):
    file_path = os.path.join(folder_path, f"C_MM0{i}.cpp")
    os.system(f"touch {file_path}")

for i in range(start_number, end_number):
    file_path = os.path.join(folder_path, f"C_MM{i}.cpp")
    os.system(f"touch {file_path}")
