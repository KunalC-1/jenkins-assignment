pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                sh 'echo "Build Started ....."'
                sh 'make'
                sh 'echo "Built Successfully"'
            }
        }
    }
}