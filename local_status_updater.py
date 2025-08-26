import os
import time
import subprocess


workspace_path = r'd:\SU-SEM1-CPP'

status_file = os.path.join(workspace_path, 'status.md')

def get_latest_file(folder):
    latest_time = 0
    latest_file = None
    for root, dirs, files in os.walk(folder):
        for f in files:
            path = os.path.join(root, f)
            mtime = os.path.getmtime(path)
            if mtime > latest_time:
                latest_time = mtime
                latest_file = path
    return latest_file

def main():
    last_file = ""
    while True:
        latest = get_latest_file(workspace_path)
        if latest and latest != last_file:
            with open(status_file, 'w') as f:
                f.write(f"**Currently working on:** `{os.path.relpath(latest, workspace_path)}`\n")
            last_file = latest
            print(f"Updated status: {latest}")
            # Auto git add, commit, and push
            try:
                subprocess.run(["git", "add", "status.md"], cwd=workspace_path, check=True)
                subprocess.run(["git", "commit", "-m", "Auto-update status"], cwd=workspace_path, check=True)
                subprocess.run(["git", "push"], cwd=workspace_path, check=True)
                print("Auto-pushed to GitHub.")
            except subprocess.CalledProcessError as e:
                print(f"Git auto-push failed: {e}")
        time.sleep(10)  

if __name__ == '__main__':
    main()