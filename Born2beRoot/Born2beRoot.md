# Document about the [subject.pdf](https://cdn.intra.42.fr/pdf/pdf/81183/en.subject.pdf)

## The differences between *aptitude* and *apt*.
Both package management tools for Debian-based Linux distributions, such as Ubuntu
* APTITUDE
 
  Is a command-line tool that provides a higher-level interface to the package management system than apt. It can be used to manage packages, search for packages, resolve package dependencies, and more. aptitude is particularly useful for resolving complex dependency issues and performing upgrades, as it has a more advanced dependency resolution algorithm than apt.
* APT

  Is a command-line tool for installing, updating, and removing packages. It is the newer of the two tools and is designed to be more user-friendly than its predecessor, apt-get. apt can be used with a variety of options and arguments to perform different actions on packages.
  
## What SELinux and AppArmor is?
SELinux and AppArmor are two security frameworks that are commonly used on Linux systems to enhance system security by restricting the actions that processes and users can perform.
* SELinux

  SELinux (Security-Enhanced Linux) is a set of kernel modifications and user-space tools that allow administrators to define policies that govern the actions that processes can take on the system. SELinux uses mandatory access control (MAC) to enforce security policies that go beyond traditional Unix-style discretionary access control (DAC). This means that SELinux can enforce policies that limit what a process can do, based on the context in which it is running (such as the user account, role, or type of process).
* AppArmor

  AppArmor is a security framework that provides a similar level of security to SELinux, but uses a different approach to enforcing security policies. Instead of using MAC, AppArmor uses a set of per-process profiles that define the resources that a process can access. These profiles are created by administrators and specify which files, directories, and system resources the process is allowed to access. AppArmor profiles are typically less complex than SELinux policies, but they can still provide a high level of protection for a system.
  
## What is SSH?
SSH (Secure Shell) is a network protocol used for secure remote access and communication between two systems. It is commonly used on Unix and Linux systems to securely log in to a remote system, execute commands remotely, and transfer files between systems.
SSH provides a secure, encrypted channel for communication between two systems, preventing eavesdropping, tampering, and other forms of network attacks. It uses public-key cryptography to authenticate users and encrypt communications. When a user connects to a remote system over SSH, the client and server first establish a secure connection using the server's public key. The client then generates a session key to encrypt all subsequent communication between the two systems.
