# Get the GCC preinstalled image from Docker Hub
FROM gcc:9.4.0

# Copy the current folder which contains C++ source code to the Docker image under /usr/src
COPY . /usr/src/S1

# Specify the working directory
WORKDIR /usr/src/S1

# Use GCC to compile the Test.cpp source file
RUN g++ -o ejecutable main.cpp Producto.cpp

# Run the program output from the previous step
CMD ["./ejecutable"]