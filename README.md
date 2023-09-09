
 <header>
        <h1>Simple Shell</h1>
        <p>A Unix command-line interpreter</p>
    </header>
    <section>
        <h2>Table of Contents</h2>
        <ul>
            <li><a href="#overview">Overview</a></li>
            <li><a href="#getting-started">Getting Started</a></li>
            <li><a href="#usage">Usage</a></li>
            <li><a href="#features">Features</a></li>
            <li><a href="#contributors">Contributors</a></li>
            <li><a href="#license">License</a></li>
        </ul>
    </section>
    <section id="overview">
        <h2>Overview</h2>
        <p>This Simple Shell project is a Unix command-line interpreter developed as part of the ALX Software Engineering program. It is designed to challenge your understanding of various programming and Unix concepts, including process creation, environment variables, and error handling.</p>
    </section>
    <section id="getting-started">
        <h2>Getting Started</h2>
        <h3>Prerequisites</h3>
        <p>Before you begin, ensure you have met the following requirements:</p>
        <ul>
            <li><strong>Operating System:</strong> Ubuntu 20.04 LTS</li>
            <li><strong>Compiler:</strong> GCC (GNU Compiler Collection)</li>
        </ul>
        <h3>Installation</h3>
        <p>To get started with the Simple Shell, follow these steps:</p>
        <ol>
            <li>Clone the project repository to your local machine:</li>
            <pre><code>git clone https://github.com/your-username/simple-shell.git</code></pre>
            <li>Compile the shell using GCC:</li>
            <pre><code>gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh</code></pre>
            <li>Run the shell:</li>
            <pre><code>./hsh</code></pre>
        </ol>
    </section>
    <section id="usage">
        <h2>Usage</h2>
        <h3>Interactive Mode</h3>
        <p>In interactive mode, the shell waits for your input and executes commands as you enter them. Here's an example:</p>
        <pre><code>$ ./hsh
$ ls
file1.txt file2.txt
$ echo "Hello, World!"
Hello, World!
$ exit
</code></pre>
        <h3>Non-Interactive Mode</h3>
        <p>In non-interactive mode, you can provide a script file containing commands to execute. Use the following syntax:</p>
        <pre><code>$ echo "ls\necho 'Hello, World!'" | ./hsh</code></pre>
    </section>
    <section id="features">
        <h2>Features</h2>
        <ul>
            <li>Basic shell commands like <code>ls</code>, <code>echo</code>, and <code>exit</code> are supported.</li>
            <li>Command lines with arguments are handled.</li>
            <li>The <code>PATH</code> variable is used to find executable programs.</li>
            <li>Error handling for invalid commands and input.</li>
        </ul>
    </section>
    <section id="contributors">
        <h2>Contributors</h2>
        <p>This project was developed by the following contributors:</p>
        <ul>
            <li>Biniyam BEYENE</li>
            <li>Sofonias Dubale</li>
        </ul>
    </section>
    <section id="license">
        <h2>License</h2>
        <p>This project is licensed under the MIT License - see the <a href="LICENSE.md">LICENSE.md</a> file for details.</p>
    </section>
