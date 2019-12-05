mkdir bin src
cd src
touch Program.java
cd ..
javac -d ./bin/ ./src/Program.java
export CLASSPATH=./bin/
java Program.java
