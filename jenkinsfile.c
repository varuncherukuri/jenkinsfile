#!bin/bash
pipeline {
    agent any

    stages {
        stage ('compile stage') {

            steps {
<<<<<<< HEAD
                withMaven(maven : 'maven_3_0_5') {
=======
                withMaven(maven : 'maven_3_3_1') {
>>>>>>> d1fec93fc27d35359e0d642bb6505b167b06c852
                    sh 'mvn clean compile'
                   }
               }
           }

            stage ('Tesing stage') {

            steps {
<<<<<<< HEAD
                withMaven(maven : 'maven_3_0_5') {
=======
                withMaven(maven : 'maven_3_3_1') {
>>>>>>> d1fec93fc27d35359e0d642bb6505b167b06c852
                    sh 'mvn test'
                   }
               }
           }
            stage ('Deployment stage') {

            steps {
<<<<<<< HEAD
                withMaven(maven : 'maven_3_0_5') {
=======
                withMaven(maven : 'maven_3_3_1') {
>>>>>>> d1fec93fc27d35359e0d642bb6505b167b06c852
                    sh 'mvn deploy'
                   }
               }
           }
        }
<<<<<<< HEAD
      }
=======
   }
>>>>>>> d1fec93fc27d35359e0d642bb6505b167b06c852
