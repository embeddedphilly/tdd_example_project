# Test Driven Development with Ceedling

##Hardware Setup
This project will run on your desktop. No special dev-board
or hardware required.

## Software Setup
After cloning the repository, first make sure you have all the
submodules initialized.

`git submodule update --init`

You will need a computer that can run Ruby. We use a Ruby gem
called Ceedling to run the unit test framework.

`gem install Ceedling`

Navigate to repository directory

`Ceedling new ./`

This will create a bunch of the background files that allow
Ceedling to run. You can press yes to replace any duplicates
**EXCEPT FOR project.yml**

**I REPEAT DO NOT REPLACE THE project.yml file**
It has been set up so that the tests will run in this repository.

To see if everything is set up correctly, run
`rake test:all`

Your screen should show an output of several failing tests. If
you see any error messages, something is not set up right.
