#!bin/bash
pipeline {
    agent any

    stages {
        stage ('compile stage') {

            steps {
                withMaven(maven : 'maven_3_3_1') {
                    sh 'mvn clean compile'
                   }
               }
           }

            stage ('Tesing stage') {

            steps {
                withMaven(maven : 'maven_3_3_1') {
                    sh 'mvn test'
                   }
               }
           }
            stage ('Deployment stage') {

            steps {
                withMaven(maven : 'maven_3_3_1') {
                    sh 'mvn deploy'
                   }
               }
           }
        }
   }
