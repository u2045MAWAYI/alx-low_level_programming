import hashlib
import sys

def generate_key(username):
    # Assuming the key is generated based on the username
    # We'll use a simple hashing algorithm to generate the key
    key = hashlib.md5(username.encode()).hexdigest()
    return key

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: ./keygen5 username")
        sys.exit(1)

    username = sys.argv[1]
    key = generate_key(username)
    print("Key for {}: {}".format(username, key))
