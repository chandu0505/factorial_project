pipeline {
    agent any

    environment {
        CC = 'gcc'
    }

    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/chandu0505/factorial_project.git'
            }
        }
        stage('Build') {
            steps {
                bat 'mingw32-make'
            }
        }
        stage('Test') {
            steps {
                bat 'test_program.exe'
            }
        }
        stage('Deploy') {
            steps {
                bat 'mkdir deploy'
                bat 'copy factorial_program.exe deploy\\'
                bat 'echo Deployment to local folder successful!'
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
