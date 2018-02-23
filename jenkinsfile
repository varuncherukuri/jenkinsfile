#!bin/bash
pipeline {
    agent any

    stages {
        stage ('compile stage') {

            steps {
                withMaven(maven : 'maven_3_5_0') {
                    sh 'mvn clean compile'
                   }
               }
           }

            stage ('Tesing stage') {

            steps {
                withMaven(maven : 'maven_3_5_0') {
                    sh 'mvn test'
                   }
               }
           }
            stage ('Deployment stage') {

            steps {
                withMaven(maven : 'maven_3_5_0') {
                    sh 'mvn deploy'
                   }
               }
           }
        }
