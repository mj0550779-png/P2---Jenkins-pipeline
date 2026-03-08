pipeline {
    agent any
    stages {
        stage('Compile') {
            steps {
                sh 'g++ sort_array.cpp -o sort_array'
            }
        }
        stage('Run') {
            steps {
                sh './sort_array'
            }
        }
    }
}
