pipeline {
    agent any

    environment {
        CC = 'gcc'
    }

    stages {
        stage('Checkout') {
            steps {
                git 'https://github.com/yourusername/factorial_project.git'
            }
        }
        stage('Build') {
            steps {
                sh 'make'
            }
        }
        stage('Test') {
            steps {
                sh './test_program'
            }
        }
        stage('Deploy') {
            steps {
                sh 'mkdir -p deploy'
                sh 'cp factorial_program deploy/'
                sh 'echo "Deployment to local folder successful!"'
            }
        }
    }
    post {
        always {
            archiveArtifacts artifacts: '**/*.o', allowEmptyArchive: true
            cleanWs()
        }
    }
}