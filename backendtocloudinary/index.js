const cloudinary = require("cloudinary").v2;

cloudinary.config({
    cloud_name: "dqhn4dq02",
    api_key: "324844667198593",
    api_secret: "XLU66ZBI-wQkQllG8anuqzOb-sc",
});

// const react = "./img/greg.jg";
const video = "./img/gerg.mp4";

// const uploadImage = async (react) => {
//   try {
//     const results = await cloudinary.uploader.upload(react);
//     console.log("Image Obj: ", results);
//     console.log("Image URL: ", results.secure_url);
//     return results.secure_url;
//   } catch (error) {
//     console.error(error);
//     return null;
//   }
// };

const uploadVideo = async (video) => {
  try {
    const results = await cloudinary.uploader.upload(video, {
      resource_type: "video",
    });
    console.log("Video: ", results.secure_url);
    return results.secure_url;
  } catch (error) {
    console.error(error);
    return null;
  }
};

// uploadImage(react);

uploadVideo(video);