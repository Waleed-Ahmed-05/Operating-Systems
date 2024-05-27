# Getting started with Ubuntu OS

I will guide to how you can use **Linux**(**Ubuntu OS**) efficiently using Terminal. Every command has been provided and explained via snippets.

## Using 'cd' command

**cd**  and **pwd** stands for **change directory** and **print present working directory**.

![CD](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/0f86fd21-f5a6-4f09-8d25-f66d74492c11)

**1.** **cd <Directory_Name>** is used to enter a specific directory via **relative** path.

**2.** **cd /home/<User>/Desktop/<Directory_Name>** is used to enter a specific directory via **absolute** path instead of initializing **relative** path simultaneously.

**3.** **cd ..** is used to exit the current directory and enter previous directory.

**4.** **pwd** is used to view current directory's **absolute** path.

**5.** **clear** is used to clear all commands off the terminal.

**NOTICE:** You can use **Copy & Paste** via **CTRL +SHIFT +C & CTRL +SHIFT +V** only in terminal.

## Using 'mkdir' command

**dir**,**mkdir** and **rmdir** stands for **directory**,**make directory** and **remove directory**.

![MKDIR_01](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/eedab75d-1c9f-485d-a19c-e337141b027f)

**1.** **mkdir <Directory_Name>** is used to create new directory.

![MKDIR_02](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/bb7c3a17-7bf4-4dd8-a425-cf721d1da8da)

![MKDIR_03](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/317bb386-8520-4b3f-9c21-6521fbc6c079)

**2.** **mkdir <Directory_Name>/<Directory_Name>** is used to create a new **directory** with a new **directory** in it or in an existing **directory**.

![MKDIR_04](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/69a6071d-ed49-4c59-8a39-91985e9fd601)

**3.** **mkdir <Directory_Name_01> <Directory_Name_02> <Directory_Name_03> <Directory_Name_04> <Directory_Name_05>** is used to create multiple **directories** at the same time.

![MKDIR_05](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/81033fd0-b215-407d-bb33-83ab7ef3a2a0)

**4.** **rmdir <Directory_Name> ** is used to remove a specific **directory**.

![MKDIR_06](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/bf96f69c-13f1-4cdd-86b5-afb7b63c5522)

**5.** **rmdir <Directory_Name_01> <Directory_Name_02> <Directory_Name_03> <Directory_Name_04> <Directory_Name_05>** is used to delete multiple **directories** at the same time.

![MKDIR_07](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/af830965-262c-4ab4-8b1d-1dbd81763fca)

## Using 'echo' command

**rm**,**-** and **-n** stands for **remove file**,**options** and **no newline**.

**1.** **echo <Any_Text>** is used to display output on next line.

**2.** **echo -n <Any_Text>** is used to display output on next line with terminal command control.

**3.** **echo <Any_Text> > <File_Name>** is used to create a new **file** and write data in it or overwrite the existing **file**.

![ECHO_01](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/a5856ec9-eb6a-4d1a-8a68-c665f862fda3)

![ECHO_02](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/0b8c9235-f36d-463f-81f2-514f25663a7b)

**4.** **echo <Any_Text> >> <File_Name>** is used to create a new **file** and write data in it or append data in the existing **file**.

![ECHO_03](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/a61d36c7-df8a-4344-98c7-916b20c2a499)

**5.** **rm <File_Name>** is used to remove **file** by specifying it's name.

![ECHO_04](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/a8c4c50d-6e80-4f0e-ab6f-a646affaa09b)

## Using 'File/Edit' commands

**mv** and **cp** stands for **move file** and **copy file**.

**1.** **touch <File_Name>** is only used to create **files**. It can neither append data nor overwrite data in an existing **file**.

![FILE_01](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/2bbb8927-8974-48ca-960b-20573b0b0ff3)

**2. ** **nano <File_Name>** is used to edit a **file** by opening a **nano** text editor on terminal directly.

**NOTICE:** When writing any directory or file name you can write first character and then click **TAB** key, the terminal will automatically write the file name but file must be present in the directory.

![FILE_02](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/52c203ee-167d-4b8f-bf99-eca97e5a34e4)

![FILE_03](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/9998fb35-b86f-464c-9016-335f9212aae4)

**2.1.** You can exit **nano** text editor by clicking **CTRL+X**, then by entering **Y** and pressing **ENTER** key again. 

![FILE_04](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/764e3a92-716d-477e-8214-8125f37797b2)

![FILE_05](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/b1979044-8680-4e58-a142-1f0ae003e1a1)

![FILE_06](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/80506e6f-f5c1-4619-9126-b3df39cb2b45)

**3.** **gedit <File_Name>** is used to open the **file** in **Linus**(**Ubuntu OS**) bulit-in text editor.

![FILE_07](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/7ab226f1-88f6-4e61-a406-1cf243e7e9e8)

![FILE_08](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/5867e611-5cff-489e-b713-949a2649c1c3)

**4.** **cat <File_Name>** is used to view all the contents written within a **file**.

![FILE_09](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/a53e8625-6ab2-4c72-8d2a-4e71f8bff280)

**5.** **head -<No_of_Lines> <File_Name>** is used to display the number of lines specified by user from the **file's** start.

![FILE_10](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/d154e447-39d6-4e11-953a-d2ae6037c063)

**6.** **tail -<No_of_Lines> <File_Name>** is used to display the number of lines specified by user from the **file's** end.

![FILE_11](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/92066154-1022-4e7f-aa3f-c5cc3ba80b8a)

**7.** **less <File_Name>** is used to display the content of the **file** in terminal where you can search for a specific character by using **/<Specific_Character>**.

**NOTICE:** You can only exit **less** terminal by clicking **Q** key.

![FILE_12](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/069f33b3-6d4d-4f22-b7f4-9beedb475259)

![FILE_13](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/201837e2-cbdb-4108-bdf1-07299c444a52)

![FILE_14](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/8d76cbcc-355f-428b-b05d-4aa714d1ca71)

![FILE_15](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/f5a2607c-63a7-40a0-b14c-a36ca8eb04dc)

**8.** **more <File_Name>** works the same as **cat <File_name>** command.

![FILE_16](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/c08204f4-e0c4-4f0f-a17d-16adf99019bf)

**9.** **sort <File_Name>** is used to display all the contents of the **file** by sorting them in ascending order.

![FILE_17](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/5aad28c4-a346-4a0c-bcf7-74d07b772776)

**10.** **mv <Source> <Destination>** is used to move **files** from one directory to another.

![FILE_18](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/3cbca347-71c0-4b74-b018-460533161401)

**10.1.** **Destination** can either be **relative** or **absolute**.

![FILE_19](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/d8bb5da7-2a8e-4c8c-af46-4b14eb1d6ed9)

**11.** **cp<Source> <Destination>** is used to copy **files** from one directory to another.

![FILE_20](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/f61bddb3-c8af-4f2c-836e-0287025f2b20)

![FILE_21](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/d5932a18-c4f3-4d33-a4dd-b0c2cca5e2da)

## Using 'ls' command

**ls** stands for **list view**.

**1.** **ls** is used to view all the **files** located in the **present working directory** except hidden **files**.

**2.** **ls -a** is used to view all the **files** located in the **present working directory** including hidden **files**.

![LIST_01](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/08bc076f-e9e6-447f-ac3f-a2bf95b92f0b)

**3.** **ls -l** is used to view files with their permissions.

**NOTICE:** **-rw-rw-r--** represent control and permissions of specific **files** which will be later.

![LIST_02](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/95f39184-822e-42dd-bd55-83a11cbd9809)

**4.** **ls -lt** is used to view **files** in descending order with respect to their creation date & time.

![LIST_03](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/af8b4e41-e3f7-4702-a6e5-195ba08f46ff)

**4.** **ls -ltr** is used to view **files** in ascending order with respect to their creation date & time.

![LIST_04](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/ffe846d2-8502-4c25-a81e-d5b90cef34a7)

## Using 'System' commands

**man**, **df** and **ps** stands for **mannual**, **show diskspace usage** and **process status**.

**1.** **uptime** is used to view the system's **awake time**.

**2.** **date** is used to view current **date & time** on the terminal.

**3.** **who** and **whoami** is used to view **username** on the system.

**4.** **whatis <Command>** is used to get **brief help** on the terminal.

**5.** **man <Command>** is used to get **detailed help** on the terminal.

![SYSTEM_01](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/6bd34a05-631c-4da3-81f9-d5dada75233a)

![SYSTEM_02](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/a00ec62b-3297-40ae-87f7-3b29bf297c02)

**6.** **df** is used view **disk space** currently occupied.

**7.** **ps** is used to view **system processes**.

![SYSTEM_03](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/9f263e24-fc76-4b6b-a620-e49325777275)

**8.** **<Command> --help** is used to get **detailed help** on the terminal.

![SYSTEM_04](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/0d4745a5-e0d1-4007-8e37-a10152b0c301)

**9.** **which <Command>** is used to view **command's location**. 

![SYSTEM_05](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/a9a346c7-53ac-4d79-9d5e-8ffbd10683c2)

**10.** **top** is used to view all process on terminal and you can exit by pressing **Q** key.

![SYSTEM_06](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/5ac29da2-4557-4aea-a3d4-e623090714ae)

## Using 'sudo' command

**1.** **sudo useradd <Username>** and **sudo groupadd <Groupname>** is used to **create** a new **user** or a **group**.

**2.** **sudo userdel <Username>** and **sudo groupdel <Groupname>** is used to **delete** a new **user** or a **group**.

**3.** **sudo passwd <Username>** and **sudo passwd <Groupname>** is used to create a new password for a **user** or a **group**.

![USER](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/48830a85-172f-45c4-9fab-ad9e20db6999)

## Using 'chmod' command

**chmod** stands for **change mode**.

**NOTICE**: In **-rw-rw-r--** & **drwxrwxr-x**, **r** represents **read**, **w** represents **write**, **x** represents **executable** and **-** represents **no permission** . And **d** in **drwxrwxr-x** represents **directory**. 

where, **r = 4**, **w = 2**, **x = 1** & **- = 0**

![PERMISSION_01](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/be4880f5-08e9-4fc3-b9dd-2a37c2c63316)

![PERMISSION_02](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/001f4bed-486a-4ca1-832b-99a2b557a101)

**1.** **chmod <Permission> <File_Name>** is used to change permission for Owners,Groups & Others.

![PERMISSION_03](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/2ad49ec4-8638-499e-9fd5-964b388f0508)

![PERMISSION_04](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/9aa120e2-7682-444c-a9a4-d76d19ea0105)

![PERMISSION_05](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/633c9b30-3abd-4daf-9f75-5e9a4b8c23e4)

![PERMISSION_06](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/803fccff-74de-489d-a2f4-32faaa864782)

![PERMISSION_07](https://github.com/Waleed-Ahmed-05/Operating-Systems/assets/156175348/ed59a74a-1890-4cae-9a28-0d2f54418fb9)

# With this we have learned the use of:

**1.** Change Directories

**2.** Make & Remove Directories

**3.** Echo

**4.** File Edits

**5.** Lists

**6.** System

**7.** Sudo

**8.** Change Modes
