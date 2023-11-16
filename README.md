# UMAA CASE+CODE

This repo is intended to hold helper scripts and example applications
to assist in development when using Connext along with the UMAA standard. 


--------------------------------------------------------------------------------
# SCRIPTS
--------------------------------------------------------------------------------
These scripts are meant to assist in your workflow when generating xml files or  
compiling your type objects.

Tested compatibility: 
    - Connext Pro 7.x
    - Connext Pro 6.1.2

## LINUX

### 1. Set Environment Variables
- Make sure you have followed the setup guide for your Connext installation, 
including setting the NDDSHOME variable.

- Set the environment variable $NDDSTARGET for your platform. IE:
```sh
export NDDSTARGET=x64Linux4gcc7.3.0
```
- Set the environment variable $UMAA_HOME to the target folder:
```sh
export UMAA_HOME="<PATH_TO_UMAA_IDL_REPO>"
```
- Ensure a pre-processor is in your PATH environment variable.
The default is `cpp`. Reference the RTI Code Generator documentation for details.


### 2. Go to folder
```sh
cd scripts/linux
```

### 3. Create XML type files :wrench:
Run the following command:
```sh
./convert_umaa_xml.sh
```

#### 4. Compile Type Objects :wrench:
**Note: Takes ~10 minutes**
Run the following script depending on your choice:

#### Modern CPP
```sh
./build_umaa_objects_cpp.sh c++11
```
#### Traditional CPP
```sh
./build_umaa_objects_cpp.sh c++98
```
**Note: The "-qualifiedEnumerator" flag will be added when generating code for c++98.** 
Reference the [https://community.rti.com/static/documentation/connext-dds/6.1.2/doc/manuals/connext_dds_professional/code_generator/users_manual/index.htm](RTI code generator) documentation for more info.
________________________________________________________________________________

## Windows

### 1. Set Environment Variables

- Make sure you have followed the setup guide for your Connext installation,  
including setting the NDDSHOME variable by running the setup script.

- Ensure a pre-processor is in your PATH environment variable.
The default is `cp.exe`. Reference the RTI Code Generator documentation for details.

Set the environment variable $UMAA_HOME to the target folder:
```sh
SET UMAA_HOME="<PATH_TO_UMAA_IDL_REPO>"
```

### 2. Go to folder
```sh
cd scripts\windows
```

#### 3. Create XML type files :wrench:

Run the following script:
```sh
gen_all_xml.bat
```

--------------------------------------------------------------------------------
# UMAA Application examples
--------------------------------------------------------------------------------

XML-based app creation as a framework was chosen for the following reasons:  

- A low code option with entities defined in an external xml artifact that can be  
    managed by a Systems Engineering group  
- XML artifacts can be used in tandem with external tools(Simulink/System Designer)  
- Decouple configuration management from platform/language


Follow the readme in the desired `sa_app_*` folder.
