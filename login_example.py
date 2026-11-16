class Login:
    """Simple login example for testing GitHub code search."""

    def __init__(self):
        self.is_logged_in = False

    def login(self, username, password):
        if username == "admin" and password == "admin123":
            self.is_logged_in = True
            return "Login successful"

        return "Invalid username or password"


if __name__ == "__main__":
    user = Login()
    print(user.login("admin", "admin123"))
