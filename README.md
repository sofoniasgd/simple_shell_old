<h1>Simple Shell</h1>
<img src="https://www.google.com/url?sa=i&url=https%3A%2F%2Fmedium.com%2F%40alxafrica&psig=AOvVaw0NJoBhCVqc3xLQMQBdb5ch&ust=1694355399263000&source=images&cd=vfe&opi=89978449&ved=0CBAQjRxqFwoTCKCer-_bnYEDFQAAAAAdAAAAABAE" alt="ALX Logo">
<h2>Introduction</h2>
<p>Welcome to the Simple Shell project! This project is a part of the ALX Software Engineering program and is designed to help you build your own Unix command-line interpreter. In this README, we will provide an overview of the project, its objectives, requirements, and instructions on how to use and test your shell.</p>
<h2>Table of Contents</h2>
<ul>
        <li><a href="#project-overview">Project Overview</a></li>
        <li><a href="#learning-objectives">Learning Objectives</a></li>
        <li><a href="#requirements">Requirements</a></li>
        <li><a href="#usage">Usage</a></li>
        <li><a href="#testing">Testing</a></li>
        <li><a href="#commands">Commands</a></li>
        <li><a href="#known-issues">Known Issues</a></li>
        <li><a href="#contributors">Contributors</a></li>
        <li><a href="#license">License</a></li>
    </ul>

<h2 id="project-overview">Project Overview</h2>

<p>The Simple Shell project is designed to challenge your understanding of various programming and Unix concepts, including but not limited to:</p>

<ul>
        <li>Basics of programming</li>
        <li>Basics of C</li>
        <li>Basics of thinking like an engineer</li>
        <li>Group work</li>
        <li>Learning how to learn</li>
        <li>UNIX shell operations</li>
        <li>Implementation of shell commands</li>
        <li>Environment manipulation</li>
        <li>Process creation and management</li>
        <li>Input and output handling</li>
    </ul>

<p>This project will involve creating a simple UNIX command interpreter that can execute basic shell commands. You'll be working in pairs and are expected to follow certain guidelines and rules to ensure a fair and productive learning experience.</p>

<h2 id="learning-objectives">Learning Objectives</h2>

<p>By the end of this project, you should be able to explain and demonstrate the following concepts without the help of external resources:</p>

<ul>
        <li>The history and key contributors to Unix and the Unix shell.</li>
        <li>How a shell works internally, including the concepts of processes, PID, and PPID.</li>
        <li>Manipulation of the environment variables of a process.</li>
        <li>The difference between a function and a system call.</li>
        <li>How to create new processes.</li>
        <li>How the shell uses the PATH variable to find executable programs.</li>
        <li>How to execute another program using the execve system call.</li>
        <li>Suspending the execution of a process until one of its children terminates.</li>
        <li>Understanding the concept of EOF (end-of-file).</li>
    </ul>

<h2 id="requirements">Requirements</h2>

<h3>General</h3>

<ul>
        <li>You may use editors like <code>vi</code>, <code>vim</code>, or <code>emacs</code>.</li>
        <li>All your files must compile on Ubuntu 20.04 LTS using <code>gcc</code> with the following options: <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code>.</li>
        <li>Each of your code files should end with a new line.</li>
        <li>You must include a <code>README.md</code> file at the root of your project folder.</li>
        <li>Your code should follow the Betty style, and it will be checked using <code>betty-style.pl</code> and <code>betty-doc.pl</code>.</li>
        <li>Your shell should not have any memory leaks.</li>
        <li>Each source file should have no more than 5 functions.</li>
        <li>All header files should be include-guarded to prevent multiple inclusion.</li>
        <li>Use system calls only when necessary.</li>
        <li>Write a README that describes your project.</li>
    </ul>

<h2 id="usage">Usage</h2>

 <h3>Interactive Mode</h3>
    <p>To use your shell in interactive mode, run the following command:</p>
    <pre><code>./shell</code></pre>
    <p>Your shell should display a prompt, waiting for user input. You can then enter shell commands, and your shell should execute them.</p>
    <pre><code>$ ./shell
($) ls
file1.txt file2.txt
($) echo "Hello, World!"
Hello, World!
($) exit
</code></pre>
    <h3>Non-Interactive Mode</h3>
    <p>Your shell should also support non-interactive mode, where commands are provided via a file. To use non-interactive mode, run the following command:</p>
    <pre><code>$ echo "ls\necho 'Hello, World!'" | ./shell</code></pre>
    <p>Your shell should execute the commands from the file and provide the output:</p>
    <pre><code>file1.txt file2.txt
Hello, World!
</code></pre>
    <h2 id="testing">Testing</h2>
    <p>You should thoroughly test your shell to ensure it behaves correctly. Test it with various shell commands, including commands with arguments and options. Also, make sure to test edge cases and error handling.</p>
    <h2 id="commands">Commands</h2>
    <p>Your shell should support the following commands:</p>
    <ul>
        <li><code>ls</code>: List files and directories</li>
        <li><code>echo</code>: Print text</li>
        <li><code>exit</code>: Exit the shell</li>
        <!-- Add more commands here -->
    </ul>
    <h2 id="known-issues">Known Issues</h2>
    <p>Document any known issues or limitations of your shell here. Be transparent about any challenges or features that are not yet implemented.</p>
    <h2 id="contributors">Contributors</h2>
    <p>This project was developed by the following contributors:</p>
    <ul>
        <li>Biniyam BEYENE</li>
        <li>Sofonias Dubale</li>
    </ul>
    <h2 id="license">License</h2>
    <p>Copyright &copy; 2023 ALX, All rights reserved.</p>


