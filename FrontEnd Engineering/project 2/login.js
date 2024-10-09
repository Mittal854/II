const wrapper = document.querySelector(".wrapper");
const loginlink = document.querySelector(".login-link");
const registerLink = document.querySelector(".register-link");
const btnPopup = document.querySelector(".btnLogin-popup");
const loginClose = document.querySelector(".login-close");
const RegisterClose = document.querySelector(".register-close");
registerLink.addEventListener("click", () => {
  wrapper.classList.add("active");
});
loginlink.addEventListener("click", () => {
  wrapper.classList.remove("active");
});
btnPopup.addEventListener("click", () => {
  wrapper.classList.remove("active-popup");
});
loginClose.addEventListener("click", () => {
  wrapper.classList.add("active-popup");
});
RegisterClose.addEventListener("click", () => {
  wrapper.classList.add("active-popup");
});
