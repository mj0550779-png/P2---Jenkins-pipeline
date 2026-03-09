pipeline {
    agent any

    parameters {
        string(
            name: 'NUMBERS',
            defaultValue: '5 3 8 1 2',
            description: 'Podaj liczby do posortowania (oddzielone spacją)'
        )
    }

    stages {

        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Compile') {
            steps {
                sh 'g++ sort_array.cpp -o sort_array'
            }
        }

        stage('Run program') {
            steps {
                sh "echo ${params.NUMBERS} | ./sort_array"
            }
        }

    }
}
