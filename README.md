# HME-Toolbox
It's a C++ implementation of Hierarchical Mixture of Experts we've used in Bioinformatics &amp; Cardiology

## OVERVIEW
-----------
CNetSOM is a C++ implementation of a Self-Organizing Map (SOM) designed for clustering and classification tasks in bioinformatics/cardiology. 
This software is capable of processing training data to generate gene clusters, providing valuable insights into patterns within biological data.

# Features
-----------
Self-Organizing Map (SOM): Implements a neural network model that organizes data into a grid based on similarity.
Multiple Distance Metrics: Supports various distance calculations including Euclidean, Manhattan, and Pearson distances.
Dynamic Node Expansion: Capable of dynamically expanding the network based on the training data.
Classification Performance Evaluation: Evaluates the performance of classification against known labels.
Output Generation: Outputs the generated gene clusters to files with .gdat extension.

# Requirements
--------------
C++ Compiler (e.g., g++11 snd above)
Standard C++ Libraries

# Organization

The code is structured as:

project/
| Blocks	       | Components	    | Description 				  		   	   | 	   
| ------------- | -------------   | -----------    				  			   |
| `src`         |  main.cpp       | `# Main application file`   			   |
|               |  NNPattern.cpp  | `Implementation of the NNPattern class`|
|               |  TNetSOM.cpp	 | `Implementation of the TNetSOM class`	|
| `include`     | NNPattern.h     | `Header for NNPattern class	`   		|
|  			    | TNetSOM.h 	    | `Header for TNetSOM class	`   		   |
| `docs`        | README          | Papers to use in your citations 4 code`|

## Compilation Instructions

To compile the project, follow these steps:

1. **Open a terminal** and navigate to the project directory.
2. **Compile the source files** using the following command:

   ```bash
   g++ -I include/ src/main.cpp src/NNPattern.cpp src/TNetSOM.cpp -o NetSOM
```

## Running the Program
----------------------
After compiling, you can run the program with the following command:

bash:
./NetSOM <data_file> <genes_exist>
<data_file>: Path to your input training data file.
<genes_exist>: Pass 1 if gene names are specified in your data file; otherwise, pass 0.

Example:
--------
./NetSOM training_data.txt 1

## OUTPUT:

After running the program, it will output generated gene clusters to files with a .gdat extension. For example, NodePatterns2043.gdat will contain the genes for node 20,43.

Additional Information:
* Ensure you have g++ installed on your system.
* Modify any parameters in the source files as needed for your specific use case.
* Check the header files for details on available methods and classes.

For any issues or contributions, please open an issue or submit a pull request.

Contributing
------------
Contributions are welcome! Please fork this repository and submit your pull requests for any improvements or bug fixes.

LICENSE
--------
This project is licensed under the MIT License. See the LICENSE file for details.

References
-----------
For detailed descriptions of algorithms and methodologies used in this implementation, please refer to the publications associated with this codebase.
 This README provides a comprehensive overview of your CNetSOM project, detailing its functionality, usage instructions, and structure. 
