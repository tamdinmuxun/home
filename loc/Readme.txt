файл main.cpp с исходным кодом программы, запрашивает при запуске имя и фамилию пользователя, а также название любимой книги, и добавляет эту информацию в конец текстового файла с результатами.
dfgdfg

Z:\> mkdir losen

Z:\> cd losen

Z:\losen> git init
Initialized empty Git repository in Z:/losen/.git/

Z:\losen> touch main.cpp
"touch" не является внутренней или внешней
командой, исполняемой программой или пакетным файлом.

Z:\losen> git status
On branch master

No commits yet

nothing to commit (create/copy files and use "git add" to track)

Z:\losen> git add mainlol.cpp
fatal: pathspec 'mainlol.cpp' did not match any files

Z:\losen> git add main.cpp
warning: LF will be replaced by CRLF in main.cpp.
The file will have its original line endings in your working directory

Z:\losen> git status
On branch master

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
        new file:   main.cpp

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        Readme.txt


Z:\losen> cat main.cpp
"cat" не является внутренней или внешней
командой, исполняемой программой или пакетным файлом.

Z:\losen> git add Readme.txt
warning: LF will be replaced by CRLF in Readme.txt.
The file will have its original line endings in your working directory

Z:\losen> git status
On branch master

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
        new file:   Readme.txt
        new file:   main.cpp


Z:\losen> git commit -m "start"
[master (root-commit) 72c6259] start
 Committer: Синицын Максим <sinicyn.mk@NET.SCH2.RU>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 2 files changed, 32 insertions(+)
 create mode 100644 Readme.txt
 create mode 100644 main.cpp

Z:\losen> touch a.txt
"touch" не является внутренней или внешней
командой, исполняемой программой или пакетным файлом.

Z:\losen> git add inputlol.txt

Z:\losen>git add outputlol.txt

Z:\losen> git add mainlol.cpp
warning: LF will be replaced by CRLF in mainlol.cpp.
The file will have its original line endings in your working directory

Z:\losen> git status
On branch master
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        new file:   inputlol.txt
        new file:   mainlol.cpp
        new file:   outputlol.txt

Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   inputlol.txt
        deleted:    main.cpp


Z:\losen> git commit -m "some changes"
[master 40cbdb3] some changes
 Committer: Синицын Максим <sinicyn.mk@NET.SCH2.RU>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 3 files changed, 44 insertions(+)
 create mode 100644 inputlol.txt
 create mode 100644 mainlol.cpp
 create mode 100644 outputlol.txt

Z:\losen> git status
On branch master
Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        deleted:    inputlol.txt
        deleted:    main.cpp

no changes added to commit (use "git add" and/or "git commit -a")

Z:\losen>git add inputlol.txt

Z:\losen>git status
On branch master
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   inputlol.txt

Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        deleted:    main.cpp


Z:\losen>git add mainlol.cpp

Z:\losen>git status
On branch master
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   inputlol.txt

Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        deleted:    main.cpp


Z:\losen>git cat
git: 'cat' is not a git command. See 'git --help'.

The most similar commands are
        clean
        mktag
        stage
        stash
        tag
        var

Z:\losen>git commit -m "done preps"
[master 407c334] done preps
 Committer: Синицын Максим <sinicyn.mk@NET.SCH2.RU>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 3 insertions(+), 1 deletion(-)

Z:\losen> git status
On branch master
Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        deleted:    main.cpp

no changes added to commit (use "git add" and/or "git commit -a")

Z:\losen> git status
On branch master
Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        deleted:    main.cpp

no changes added to commit (use "git add" and/or "git commit -a")

Z:\losen>git add mainlol.cpp

Z:\losen>git status
On branch master
Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        deleted:    main.cpp

no changes added to commit (use "git add" and/or "git commit -a")

Z:\losen> git status
On branch master
Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        deleted:    main.cpp

no changes added to commit (use "git add" and/or "git commit -a")

Z:\losen>git add mainlol.cpp

Z:\losen> git status
On branch master
Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        deleted:    main.cpp

no changes added to commit (use "git add" and/or "git commit -a")

Z:\losen>
Z:\losen> git status
On branch master
Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        deleted:    main.cpp
        modified:   mainlol.cpp

no changes added to commit (use "git add" and/or "git commit -a")

Z:\losen> git add mainlol.cpp
warning: LF will be replaced by CRLF in mainlol.cpp.
The file will have its original line endings in your working directory

Z:\losen>git status
On branch master
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   mainlol.cpp

Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        deleted:    main.cpp


Z:\losen>git commit -m "done preps 4 sure"
[master 4f4941f] done preps 4 sure
 Committer: Синицын Максим <sinicyn.mk@NET.SCH2.RU>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 11 insertions(+), 11 deletions(-)
