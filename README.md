

<h1>Simple Shell</h1>
    <h2>Project Overview</h2>

   <p>
        This Simple Shell project is a part of the ALX Software Engineering program and is designed to challenge your understanding of various programming and Unix concepts. It involves creating your own Unix command-line interpreter.
    </p>
    <h2>Getting Started</h2>
    <h3>Prerequisites</h3>
    <p>
        Before you begin, ensure you have met the following requirements:
    </p>
    <ul>
        <li>Operating System: Ubuntu 20.04 LTS</li>
        <li>Compiler: GCC (GNU Compiler Collection)</li>
    </ul>
    <h3>Installation</h3>

<p>To get started with the Simple Shell, follow these steps: </p>

<ol>
        <li>Clone the project repository to your local machine:</li>
        <pre><code>git clone https://github.com/your-username/simple-shell.git</code></pre>
        <li>Compile the shell using GCC:</li>
        <pre><code>gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh</code></pre>
        <li>Run the shell:</li>
        <pre><code>./hsh</code></pre>
    </ol>
    <h2>Usage</h2>
    <p>
        You can use the Simple Shell in interactive mode or non-interactive mode.
    </p>
    <h3>Interactive Mode</h3>
    <p>
        In interactive mode, the shell waits for your input and executes commands as you enter them.
    </p>
    <pre><code>$ ./hsh
$ ls
file1.txt file2.txt
$ echo "Hello, World!"
Hello, World!
$ exit
</code></pre>
    <h3>Non-Interactive Mode</h3>
    <p>
        In non-interactive mode, you can provide a script file containing commands to execute.
    </p>
    <pre><code>$ echo "ls\necho 'Hello, World!'" | ./hsh</code></pre>
    <h2>Features</h2>
    <ul>
        <li>Basic shell commands like ls, echo, and exit are supported.</li>
        <li>Command lines with arguments are handled.</li>
        <li>The PATH variable is used to find executable programs.</li>
        <li>Error handling for invalid commands and input.</li>
        <!-- Add more features here -->
    </ul>
    <h2>Contributors</h2>
    <p>
        This project was developed by the following contributors:
    </p>
    <ul>
        <li>Biniyam BEYENE</li>
        <li>Sofonias Dubale</li>
    </ul>
    <h2>License</h2>
    <p>
        This project is licensed under the MIT License - see the <a href="LICENSE.md">LICENSE.md</a> file for details.
    </p>
