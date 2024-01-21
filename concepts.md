# Git concept

## Concepts of Git explaining various terms

 Git is a distributed version control system that tracks changes to files over time, allowing multiple developers to collaborate on a project.

 Repository:  
 A Git repository is a collection of files and their complete history.
 
 Commit: 
 A commit is a snapshot of a repository at a specific point in time. It represents a set of changes made to the repository.
 
 Branch: 
 A branch is an independent line of development in Git. It allows for parallel development and isolation of features.
 
 Merge: 
 Merging combines changes from different branches into one branch.
 
 Clone: 
 Cloning creates a copy of a remote repository on your local machine.

 Fork:
 Creates a copy of a repository to make independant changes without affecting the original repository.

## Basic Commands of Git
```
git init: Initializes a new Git repository.
git status: Shows the status of the repository.
git add <file>: Adds a file to the staging area.
git commit -m "Commit message": Commits the changes in the staging area.
git branch: Lists all branches in the repository.
git branch <branch_name>: Creates a new branch.
git remote add origin <remote_repository_url>: Adds a remote repository.
git push <remote> <branch>: Pushes commits to a remote repository.
git pull <remote> <branch>: Fetches and merges changes from a remote repository.
git merge <branch_name>: Merges changes from one branch into the current branch.


```
## Concepts on GitHub, GitLab, Bitbucket

GitHub:
It is a git-based repository hosting platform. GitHub has a simple User Interface that quickly gets developers in the flow of working with Git algorithms. It only hosts projects that use the Git VCS. It is free for public repositories and for private ones it is paid.  Another defining characteristic is its speed, the service pushes and pulls requests and merges versions quickly.

GitLab:
It does almost everything that GitHub does, so it is like Github, but here we have free private repositories that Github doesn't. GitLab Community Edition is free and open-sourced. Here we can set and modify people's permissions according to their roles. In this, you can attach any file to any issue. You can't do this inside GitHub.

Bitbucket:
It supports the Mercurial VCS(version control system) in addition to Git. It is not open source but by buying the self-hosted version the full source code is provided. It offers both commercial plans and free accounts. It offers free accounts with an unlimited number of private repositories

## Industrial practices of using Git

1. Dividing work into repositories
2. Useful commit messages
3. Commit early and often
4. Identify a branching strategy
5. Get feedback through code reviews

## Cloning a repo to local

Once you're on GitHub, find the main page of the repository. Then click <> Code. There, you should see an option to clone. Next, copy the URL. Depending on your system, you'll use Terminal (with Mac) or Command line (with Windows git bash) to move it to your local directory. Use your Git clone command and the copied URL. 

## Resources used

1. GeeksforGeeks
2. Hubspot
3. medium

